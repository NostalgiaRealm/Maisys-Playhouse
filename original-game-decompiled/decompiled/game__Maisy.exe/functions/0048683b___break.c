
/* ==== __break @ 0048683b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048683b-0048683b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


