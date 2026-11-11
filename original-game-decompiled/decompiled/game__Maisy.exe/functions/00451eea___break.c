
/* ==== __break @ 00451eea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451eea-00451eea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


