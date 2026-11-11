
/* ==== __break @ 00441809 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441809-00441809
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


