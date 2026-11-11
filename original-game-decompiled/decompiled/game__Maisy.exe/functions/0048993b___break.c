
/* ==== __break @ 0048993b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048993b-0048993b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


