
/* ==== __break @ 0043bf4d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bf4d-0043bf4d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


