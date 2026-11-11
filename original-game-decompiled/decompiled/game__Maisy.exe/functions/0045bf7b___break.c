
/* ==== __break @ 0045bf7b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bf7b-0045bf7b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


