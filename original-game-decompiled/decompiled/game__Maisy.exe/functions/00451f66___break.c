
/* ==== __break @ 00451f66 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f66-00451f66
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


