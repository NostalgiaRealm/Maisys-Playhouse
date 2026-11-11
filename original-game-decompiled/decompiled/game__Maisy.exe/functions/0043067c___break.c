
/* ==== __break @ 0043067c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043067c-0043067c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


