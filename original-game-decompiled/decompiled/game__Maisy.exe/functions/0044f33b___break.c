
/* ==== __break @ 0044f33b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044f33b-0044f33b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


