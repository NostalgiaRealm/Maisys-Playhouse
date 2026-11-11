
/* ==== __break @ 00412148 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00412148-00412148
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


