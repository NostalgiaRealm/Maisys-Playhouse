
/* ==== __break @ 004245ee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004245ee-004245ee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


