
/* ==== __break @ 0044a95e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a95e-0044a95e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


