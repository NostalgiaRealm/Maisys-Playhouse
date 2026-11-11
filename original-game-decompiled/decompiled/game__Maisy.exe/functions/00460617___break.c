
/* ==== __break @ 00460617 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00460617-00460617
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


