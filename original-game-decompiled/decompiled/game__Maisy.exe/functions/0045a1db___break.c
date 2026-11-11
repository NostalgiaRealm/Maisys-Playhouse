
/* ==== __break @ 0045a1db ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a1db-0045a1db
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


