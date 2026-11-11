
/* ==== __break @ 004365dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004365dd-004365dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


