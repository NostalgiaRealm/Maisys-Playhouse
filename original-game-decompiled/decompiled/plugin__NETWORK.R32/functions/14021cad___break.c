
/* ==== __break @ 14021cad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021cad-14021cad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


