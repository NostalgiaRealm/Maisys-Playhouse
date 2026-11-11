
/* ==== __break @ 00451eef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451eef-00451eef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


