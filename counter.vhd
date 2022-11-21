library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_unsigned.all;

Entity counter is
  Port( clk : in std_logic;		--zegar
		  reset : in std_logic;		--reset
        counter : out std_logic_vector(7 downto 0));	--wyjscie licznika
end counter;

architecture Behavioral of counter is
  signal Currstate : std_logic_vector(7 downto 0); 			  --aktualny stan
  signal Nextstate : std_logic_vector(7 downto 0);				  --kolejny stan
  signal feedback : std_logic;										  --sygnal po operacji xor		
  signal one_second_counter : STD_LOGIC_VECTOR(27 downto 0);  --licznik 1 sekundowy
  signal one_second_enable : std_logic;			    			  --sygnal 1hz
begin

	process(clk, reset)					--licznik 1 sekundowy
		begin
			if(reset='0') then
				one_second_counter <= (others => '0');
			elsif(rising_edge(clk)) then
				if(one_second_counter>=x"5F5E0FF") then
					one_second_counter <= (others => '0');
            else
               one_second_counter <= one_second_counter + "0000001";
            end if;
			end if;
	end process;

one_second_enable <= '1' when one_second_counter=x"5F5E0FF" else '0';


  process(one_second_enable,reset)	--licznik lfsr
	begin
    if(reset = '0') then
      Currstate <= (0 => '1', others =>'0');
    elsif (rising_edge(one_second_enable)) then
      Currstate <= Nextstate;
    end if;
  end process;
  
  feedback <= Currstate(4) xor Currstate(3) xor Currstate(2) xor Currstate(0); --operacja xor
  Nextstate <= feedback & Currstate(7 downto 1);	--do aktualnego stanu przypisz kolejny
  counter <= Currstate;	--do wyjscia przypisz aktualny stan

end Behavioral;
