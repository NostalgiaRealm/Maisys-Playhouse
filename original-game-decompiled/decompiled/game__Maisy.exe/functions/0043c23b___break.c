
/* ==== __break @ 0043c23b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c23b-0043c23b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


