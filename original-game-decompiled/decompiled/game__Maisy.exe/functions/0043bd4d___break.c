
/* ==== __break @ 0043bd4d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bd4d-0043bd4d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


