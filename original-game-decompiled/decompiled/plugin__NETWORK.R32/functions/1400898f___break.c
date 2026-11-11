
/* ==== __break @ 1400898f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400898f-1400898f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


