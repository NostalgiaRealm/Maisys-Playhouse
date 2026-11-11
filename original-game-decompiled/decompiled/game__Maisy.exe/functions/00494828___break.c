
/* ==== __break @ 00494828 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00494828-00494828
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


