
/* ==== __break @ 0043c8db ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c8db-0043c8db
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


