
/* ==== __break @ 00451f56 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f56-00451f56
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


