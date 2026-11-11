
/* ==== __break @ 0048882b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048882b-0048882b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


