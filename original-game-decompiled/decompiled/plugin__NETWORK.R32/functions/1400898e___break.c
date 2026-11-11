
/* ==== __break @ 1400898e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400898e-1400898e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


