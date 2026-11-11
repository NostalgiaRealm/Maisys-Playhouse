
/* ==== __break @ 00451efe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451efe-00451efe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


