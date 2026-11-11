
/* ==== __break @ 1400d2ec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2ec-1400d2ec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


