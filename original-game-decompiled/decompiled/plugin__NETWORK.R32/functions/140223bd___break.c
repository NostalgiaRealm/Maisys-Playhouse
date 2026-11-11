
/* ==== __break @ 140223bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140223bd-140223bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


