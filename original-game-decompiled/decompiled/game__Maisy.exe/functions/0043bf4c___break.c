
/* ==== __break @ 0043bf4c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bf4c-0043bf4c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


