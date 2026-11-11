
/* ==== __break @ 00417fa8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417fa8-00417fa8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


