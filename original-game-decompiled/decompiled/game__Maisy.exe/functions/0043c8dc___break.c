
/* ==== __break @ 0043c8dc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c8dc-0043c8dc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


