
/* ==== __break @ 0043c8ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c8ce-0043c8ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


