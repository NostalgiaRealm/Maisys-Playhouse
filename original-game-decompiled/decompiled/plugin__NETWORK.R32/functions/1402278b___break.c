
/* ==== __break @ 1402278b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402278b-1402278b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


