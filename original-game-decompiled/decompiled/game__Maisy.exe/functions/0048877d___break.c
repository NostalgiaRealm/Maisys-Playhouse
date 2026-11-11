
/* ==== __break @ 0048877d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048877d-0048877d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


