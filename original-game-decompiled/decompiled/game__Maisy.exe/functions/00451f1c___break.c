
/* ==== __break @ 00451f1c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f1c-00451f1c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


