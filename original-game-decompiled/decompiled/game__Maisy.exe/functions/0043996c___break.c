
/* ==== __break @ 0043996c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043996c-0043996c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


