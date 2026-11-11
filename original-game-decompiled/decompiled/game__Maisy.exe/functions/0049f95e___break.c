
/* ==== __break @ 0049f95e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f95e-0049f95e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


