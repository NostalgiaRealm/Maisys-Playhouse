
/* ==== __break @ 004794ee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004794ee-004794ee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


