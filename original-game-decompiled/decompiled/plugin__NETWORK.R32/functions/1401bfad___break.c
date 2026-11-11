
/* ==== __break @ 1401bfad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfad-1401bfad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


