
/* ==== __break @ 00451dda ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451dda-00451dda
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


