
/* ==== __break @ 0044af2b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044af2b-0044af2b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


