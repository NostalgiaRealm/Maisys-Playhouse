
/* ==== __break @ 004389ee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004389ee-004389ee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


