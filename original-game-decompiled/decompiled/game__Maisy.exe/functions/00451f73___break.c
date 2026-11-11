
/* ==== __break @ 00451f73 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f73-00451f73
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


