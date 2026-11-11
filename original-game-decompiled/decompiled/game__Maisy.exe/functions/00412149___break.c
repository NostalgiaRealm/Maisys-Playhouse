
/* ==== __break @ 00412149 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00412149-00412149
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


