
/* ==== __break @ 00442c16 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442c16-00442c16
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


