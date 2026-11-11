
/* ==== __break @ 00451f6b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f6b-00451f6b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


