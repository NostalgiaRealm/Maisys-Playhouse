
/* ==== __break @ 00451efb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451efb-00451efb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


