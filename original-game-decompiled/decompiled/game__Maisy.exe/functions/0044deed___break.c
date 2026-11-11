
/* ==== __break @ 0044deed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044deed-0044deed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


