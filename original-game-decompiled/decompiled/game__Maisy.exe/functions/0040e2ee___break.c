
/* ==== __break @ 0040e2ee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040e2ee-0040e2ee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


