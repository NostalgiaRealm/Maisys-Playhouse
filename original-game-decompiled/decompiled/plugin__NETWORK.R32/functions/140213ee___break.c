
/* ==== __break @ 140213ee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140213ee-140213ee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


