
/* ==== __break @ 0043cf1b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043cf1b-0043cf1b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


