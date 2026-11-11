
/* ==== __break @ 0040854f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040854f-0040854f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


