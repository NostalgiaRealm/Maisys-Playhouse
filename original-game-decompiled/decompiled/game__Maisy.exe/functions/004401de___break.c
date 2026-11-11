
/* ==== __break @ 004401de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004401de-004401de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


